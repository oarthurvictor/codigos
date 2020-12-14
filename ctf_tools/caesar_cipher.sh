#!/bin/bash

#text cipher "CaeSaR C1PH3R is Go0D"

IN="JhlZhY J1WO3Y pz Nv0K"

for I in $(seq 25); do
	echo $I $IN | tr $(printf %${I}s | tr ' ' '.')\a-z a-za-z | tr $(printf %${I}s | tr ' ' '.')\A-Z A-ZA-Z
done
