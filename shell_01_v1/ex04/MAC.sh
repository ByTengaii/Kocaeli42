#!/bin/bash
ifconfig | grep ether | tr -d "ether"
