#!/bin/bash
blih -u maurin.liberal@epitech.eu repository create $1
blih -u maurin.liberal@epitech.eu repository setacl $1 ramassage-tek r
blih -u maurin.liberal@epitech.eu repository getacl $1
