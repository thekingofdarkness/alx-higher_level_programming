#!/bin/bash
# takes in a URL as an argument, sends a GET request to the URL, and displays the body of the response
curl -s "$1" -X GET -H "X-AlxSchool-User-Id: 98"
