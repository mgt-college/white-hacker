#!/bin/sh

while true; do ( echo "HTTP/1.0 200 Ok"; echo; echo "Hello World" ) | nc -lvp $1; done
