#include <string.h>
#include <stdlib.h>
#include <string>
#include <curl/curl.h>
#include <libxml/HTMLparser.h>

// curl_global_init
static bool init(CURL *&conn, char *url)
{
	CURLcode code;

	conn = curl_easy_init();

	if(conn == NULL) {
		fprintf(stderr, "Failed to create CURL connection\n");
		exit(EXIT_FAILURE);
	}

	return true;
}


int main(int argc, char *argv[])
{
	CURL *conn = NULL;
	CURLcode code;
	std::string title;

	// Ensure one argument is given

	if(argc != 2) {
		fprintf(stderr, "Usage: %s <url>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	curl_global_init(CURL_GLOBAL_DEFAULT);
	
	printf("Done xxxx2\n");


	return 0;

}
