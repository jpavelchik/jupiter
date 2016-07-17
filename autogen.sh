#!/bin/sh
autoreconf -f -i -Wall,no-obsolete
automake --force-missing --add-mising --copy >/dev/null 2>&1
