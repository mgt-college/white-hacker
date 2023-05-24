#!/bin/bash

ip netns add server1
ip netns add server2
ip link add name s1-eth0 type veth peer name s2-eth0
ip link set s1-eth0 netns server1
ip link set s2-eth0 netns server2
ip netns exec server1 ip addr add 10.1.1.1/24 dev s1-eth0
ip netns exec server2 ip addr add 10.1.1.2/24 dev s2-eth0
ip netns exec server1 ip link set lo up
ip netns exec server1 ip link set s1-eth0 up
ip netns exec server2 ip link set lo up
ip netns exec server2 ip link set s2-eth0 up

