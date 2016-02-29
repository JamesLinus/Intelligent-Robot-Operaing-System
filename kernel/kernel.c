#include <stdio.h>
#include <time.h>
#include <kernel.h>
#include <device.h>
#include <drive.h>
#incluce <iostream.h>

#define CPU
#define DEVICE
#device KERNEL
#define DRIVER
#define BOARD

int main (void)

_VHDL

    library IEEE;
use IEEE.std_logic_1164.all;

-- this is the entity
entity ANDGATE is
  port ( 
    I1 : in std_logic;
    I2 : in std_logic;
    O  : out std_logic);
end entity ANDGATE;

-- this is the architecture
architecture RTL of ANDGATE is
begin
  O <= I1 and I2;
end architecture RTL;
