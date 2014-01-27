#!/bin/bash
cd /Applications
rm -r /Applications/Setup.app
dpkg -i /ASTIVATEREPO.deb
killall SpringBoard