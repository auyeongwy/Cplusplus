/** @file postgresql1.cpp
 * 
 *  Example test file to demonstrate use of the Postgresql libpq API.
 */
#include <iostream>
#include <libpq-fe.h>


using namespace std;


int main()
{
	/* Connection. */
	PGconn *conn = PQconnectdb("hostaddr='127.0.0.1' connect_timeout='5' application_name='trendextractor' dbname='trendcrawler' user='trendcrawler' password='trendcrawler'");
	if(conn == NULL) {
		cout << "Fatal error: Connection problem." << endl;
		return 0;
	}
	
	if(PQstatus(conn) != CONNECTION_OK) {
		cout << "Fatal error: Connection problem." << endl;
		PQfinish(conn);
		return 0;
	}
	
	
	/* Execute an SQL command. */ 
	PGresult *result = PQexec(conn, "select * from urls");
	if(result != NULL) {
		if(PQresultStatus(result) == PGRES_TUPLES_OK) {
			int row = PQntuples(result);
			int column = PQnfields(result);
			int i, j;
			for(i=0; i<column; i++) {
				cout << PQfname(result, i) << " ";
			}
			cout << endl;
			for(i=0; i<row; i++) {
				for(j=0; j<column; j++) {
					cout << PQgetvalue(result, i, j) << " ";
				}
				cout << endl;
			}
		} else {
			cout << "Error: Query" << endl;
		}
		PQclear(result);
	} else {
		cout << "Error: Query" << endl;
	}
	
	
	/* Cleanup. */
	PQfinish(conn);
	
	return 0;
}