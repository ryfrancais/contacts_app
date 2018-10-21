from constants import DEBUG
import app_io

def main():
    io = app_io.App_IO()
    io.io_main_view()

if DEBUG:
    main()