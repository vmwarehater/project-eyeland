@echo off

xmake
copy netlib.dll build\windows\x64\release\netlib.dll
xmake run