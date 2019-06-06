#!/bin/bash
blih -u maxime.eleonore@epitech.eu repository create $1
blih -u maxime.eleonore@epitech.eu repository setacl $1 ramassage-tek r
blih -u maxime.eleonore@epitech.eu repository getacl $1
