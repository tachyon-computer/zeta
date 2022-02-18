#!/usr/bin/env bash

set -uo pipefail

RED='\033[0;31m'
NC='\033[0m'

LICENSE_HEADER="^/\\*\\*
 \\* Copyright \\(c\\) [0-9]{4}(-[0-9]{4})?, .*
 \\*
 \\* SPDX-License-Identifier: BSD-3-Clause
 \\*/"

license_errors=()

# Take files changed in this commit
for fname in $(git diff --name-only --cached)
do
    # Check only files with given extension
    if [[ ${fname##*\.} == @(cc|hh) ]]; then
        if [[ ! $(head -n 5 "$fname") =~ $LICENSE_HEADER ]]; then
            license_errors+=("$fname")
        fi
    fi
done

if [[ ${#license_errors[@]} -eq 0 ]]; then
    exit 0
fi

echo -e "${RED}Files without correct license header:${NC}"
for fname in "${license_errors[@]}"
do
    echo -e "${RED}$fname${NC}"
done

exit 1
