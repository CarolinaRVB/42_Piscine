#!/bin/sh

find . -type f -name '*.sh' -exec /usr/bin/basename {} .sh \;
