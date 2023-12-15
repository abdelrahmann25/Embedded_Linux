#!/bin/bash

# check if .bashrc exists
bashrc_path="$HOME/.bashrc"

if [ -f "$bashrc_path" ]; then
    # Append environment variable to .bashrc
    echo "export HELLO=$HOSTNAME" >> "$bashrc_path"
    # Append Local variable "LOCAL" to .bashrc
    echo "LOCAL=$(whoami)" >> "$bashrc_path"

    echo "LOCAL and HELLO appended to .bashrc."

    # Opening another terminal
    gnome-terminal -x bash -c 'echo "HELLO: $HELLO"; echo "LOCAL: $LOCAL"; bash'
else
    echo "Error: .bashrc file not found in $HOME directory."
fi
