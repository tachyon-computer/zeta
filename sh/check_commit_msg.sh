#!/usr/bin/env bash

set -euo pipefail

RED='\033[0;31m'
NC='\033[0m'

function error {
    echo -e "${RED}$1${NC}"
    exit 1
}

commit="$1"

line_number=0
while read -r line; do
    # Exit on verbose data
    if [[ "$line" == "# ------------------------ >8 ------------------------" ]]; then
        break
    fi

    # Skip comments
    if [[ "$line" =~ ^#.* ]]; then
        continue
    fi

    ((line_number += 1))

    if [[ $line_number -eq 1 ]]; then
        # Check if the commit title has the category specified
        message_regex="^[A-Z](.*[a-zA-z+])+: .+$"
        if (grep -Evq "$message_regex" <<< "$line"); then
            error "Commit title not matching \`Category: Message\` pattern"
        fi

        if [[ "$line" =~ \.$ ]]; then
            error "Period at the end of the commit title"
        fi
    fi
done <"$commit"

exit 0
