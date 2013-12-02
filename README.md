TTGetDateTimeString
===================

Return a datetime string for my .bat file.


## Usage


	echo.
	set util_path=..
	
	FOR /F "delims=" %%i IN ('%util_path%\GetDateString.exe') DO set date_stamp=%%i
	echo Today is %date_stamp%. It will be used by default.
	set /p date_stamp=Input the DATE for dir name [%date_stamp%]: 

