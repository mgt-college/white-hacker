import time
import http.server
import socketserver

BIND = "192.168.10.3"
PORT = 8080


class MyTCPHandler(http.server.BaseHTTPRequestHandler):

    def do_GET(self):
        print("Recieve GET Request.")

        time.sleep(100)

        self.send_response(200)
        self.send_header('Content-Type', 'text/plain; charset=utf-8')
        self.end_headers()
        self.wfile.write(b'Hello from do_GET')

with socketserver.TCPServer((BIND, PORT), MyTCPHandler) as httpd:
    print("serving at port", PORT)
    httpd.serve_forever()
