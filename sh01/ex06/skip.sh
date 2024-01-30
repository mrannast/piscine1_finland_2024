#!/bin/bash
ls -l | sed g\;n | grep -v '^[[:space:]]*$'
