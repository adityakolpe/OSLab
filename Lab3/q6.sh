#!/bin/bash
find . -type f -exec sed -i 's/^ex: /Example: /' {} ';'