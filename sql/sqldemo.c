// sql.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"


// SQLConnect_ref.cpp
// compile with: odbc32.lib
#include <windows.h>
#include <sqlext.h>
#include <stdio.h>
#include <sql.h>
#define _SQLNCLI_ODBC_
#include "sqlncli.h"


extern wchar_t *consulta1;
SQLWCHAR consulta2[] = L"SELECT top 2 message from log";


int mainsql2(void)
{
	SQLHENV henv;
	SQLHDBC hdbc;
	SQLHSTMT hstmt;
	SQLRETURN retcode;
	SQLPOINTER rgbValue;
	SQLSMALLINT numCols;


	SQLCHAR szText[200];
	SQLWCHAR szCity[200];

	SQLLEN cbText = 0;
	SQLLEN cbCity = 0;

	//	SQLINTEGER    cbText;

	SQLCHAR OutConnStr[1024];
	SQLSMALLINT OutConnStrLen;
	HWND desktopHandle;

	int i = 0;
	rgbValue = &i;

	desktopHandle = GetDesktopWindow();

	// Allocate environment handle
	retcode = SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &henv);

	// Set the ODBC version environment attribute
	if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
		retcode = SQLSetEnvAttr(henv, SQL_ATTR_ODBC_VERSION, (SQLPOINTER*)SQL_OV_ODBC3, 0);

		// Allocate connection handle
		if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
			retcode = SQLAllocHandle(SQL_HANDLE_DBC, henv, &hdbc);

			// Set login timeout to 5 seconds
			if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
				SQLSetConnectAttr(hdbc, SQL_LOGIN_TIMEOUT, (SQLPOINTER)(rgbValue), 0);
				//retcode = SQLDriverConnect(hdbc, desktopHandle, (SQLWCHAR*)L"Driver={SQL Server Native Client 11.0};Server=RUBEN-PC\\SQLEXPRESS;Uid=sa;Pwd=call;\0", 1024, (SQLWCHAR*)OutConnStr, 255, &OutConnStrLen, SQL_DRIVER_COMPLETE);
				retcode = SQLDriverConnect(hdbc, desktopHandle, (SQLWCHAR*)L"Driver={SQL Server Native Client 11.0};Server=DESKTOP-SJA365E\\MSS10135;Uid=sa;Pwd=1.Write.1;\0", 1024, (SQLWCHAR*)OutConnStr, 255, &OutConnStrLen, SQL_DRIVER_COMPLETE);
				// 117 es el largo de la connection string
				if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
					retcode = SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);
					//retcode = SQLAllocStmt(hdbc, &hstmt);
					retcode = SQLPrepare(hstmt, consulta1, SQL_NTS);

					retcode = SQLExecute(hstmt);


					if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
						retcode = SQLBindCol(hstmt, 1, SQL_C_CHAR, szText, 200, &cbText);
						//retcode = SQLBindCol(hstmt, 2, SQL_C_CHAR, szCity, 200, &cbCity);


						for (i; ; i++) {
							retcode = SQLFetch(hstmt);    //COGE EL SIGUEINTE REGISTRO DE LA TABLA
							if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO)
								printf("%s \n", szText);
							else
								break;
						}
					}

				}

			}
		}

	}

}

//   https://stackoverflow.com/questions/15906580/how-to-configure-gtk-on-visual-studio-2010
#include <gtk-2.0\gtk\gtk.h>

int main_demo(int argc, char* argv[])
{
	mainsql();

	gtk_init(&argc, &argv);

	GtkWidget* window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_widget_set_usize(window, 300, 200);

	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
	gtk_window_set_title(GTK_WINDOW(window), "GTK+ with VS2010");

	gtk_widget_show(window);

	gtk_main();
	return 0;
}



