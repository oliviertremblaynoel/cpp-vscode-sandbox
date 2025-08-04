#!/bin/sh
set -e

TARGET="/sandbox"
DEFAULTS="/defaults"

mkdir -p "$TARGET"

if [ -z "$(ls -A "$TARGET")" ]; then
  echo "[init] Populating $TARGET with default content..."
  cp -a "$DEFAULTS"/. "$TARGET"/
  chown -R 1000:1000 /sandbox
else
  echo "[init] $TARGET already populated, skipping."
fi
