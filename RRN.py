RRN = raw_input("Your Residence Registration Number: ");

summ = 0;
summ = (int(RRN[0])*2)+(int(RRN[1])*3)+(int(RRN[2])*4)+(int(RRN[3])*5)+(int(RRN[4])*6)+(int(RRN[5])*7)+(int(RRN[6])*8)+(int(RRN[7])*9)+(int(RRN[8])*2)+(int(RRN[9])*3)+(int(RRN[10])*4)+(int(RRN[11])*5);
summ = summ % 11;
summ = 11-summ;
summ = summ % 10;

print "summ:",summ;
print "Parity Digit:",int(RRN[12]);
