@echo off
@echo ERASING DATA FLASH

copy .\SUT\MyECU.nvram_empty .\SUT\MyECU.nvram 2>nul
if %ERRORLEVEL%==0 goto SUCCESS
if NOT %ERRORLEVEL%==0 goto ERROR
:SUCCESS
color a9
cls
echo SUCCESS!
echo OK! DATA FLASH HAS BEEN SUCCESSFULLY ERASED

goto END
:ERROR
color ce
cls
echo ERROR! COULD NOT MASS ERASE DATA FLASH!
echo STOP DEBUGGER 
echo 1) STOP CANOE over key ESC 
echo 2) STOP VSTUDIO debugging (Shift + F5) IN ORDER 
echo    TO ALLOW WRITE ACCCESS TO DATA FLASH
echo then restart this batch file.
:END
@pause