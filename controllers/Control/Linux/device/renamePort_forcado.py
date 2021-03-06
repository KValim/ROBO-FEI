#coding: utf-8
import os
import sys

from lib_robotis import USB2Dynamixel_Device

from lib_robotis import Robotis_Servo


def find_servos(dyn):
    ''' Finds all servo IDs on the USB2Dynamixel '''
    print 'Scanning for Servos.'
    servos = []
    dyn.servo_dev.setTimeout( 0.03 ) # To make the scan faster
    for i in xrange(21):
        try:
            s = Robotis_Servo( dyn, i )
            if i>0 and i<=18:
                tipo = "body"
            if i==19 or i==20:
                tipo = "head"
#            print '\n FOUND A SERVO @ ID %d\n' % i
            servos.append( i )
        except:
            pass
    dyn.servo_dev.setTimeout( 1.0 ) # Restore to original
    return servos, tipo

def findInfo(porta):

    comando = "udevadm info -a -n "+porta

    string = os.popen(comando).read()
#    print string

    index = string.find("{serial}==")
    serial = string[index+11:index+50]
    serial = serial.split("\"")
    serial = serial[0]

    
    index = string.find("ATTRS{idProduct}==")
    idProduct = string[index+19:index+50]
    idProduct = idProduct.split("\"")
    idProduct = idProduct[0]

    index = string.find("ATTRS{idVendor}==")
    idVendor = string[index+18:index+50]
    idVendor = idVendor.split("\"")
    idVendor = idVendor[0]

#    print serial, idProduct, idVendor, devpath
    return serial, idProduct, idVendor


for i in range(0,4):
    porta = "/dev/ttyUSB"+str(i)
    print porta

    try:
#        print servos, tipo
        portahead = "/dev/ttyUSB1"
#            print "portahead", portahead
        portabody = "/dev/ttyUSB2"
#            print "portabody", portabody
    except:
        print "nao tem servo conectado"
        pass



#print "portahead", portahead
#print "portabody", portabody
try:
    HEADserial, HEADidProduct, HEADidVendor = findInfo(portahead)
    f1 = open("/etc/udev/rules.d/41-ftdi-head.rules", "w")
    f1.write("KERNEL==\"ttyUSB?\", SUBSYSTEMS==\"usb\", ATTRS{idVendor}==\""+str(HEADidVendor)+"\", ATTRS{serial}==\""+str(HEADserial)+"\",  ATTRS{idProduct}==\""+str(HEADidProduct)+"\", MODE=\"0777\", SYMLINK+=\"robot/head\"\n")
    f1.close()
except:
    print(sys.exc_info())
    print "N??o foi possivel criar as regras head"
    print "Verifique se a chave que liga os servos motores est?? na posi????o ligada seu bobo."
    
try:
    BODYserial, BODYidProduct, BODYidVendor = findInfo(portabody)
    f2 = open("/etc/udev/rules.d/41-ftdi-body.rules", "w")
    f2.write("KERNEL==\"ttyUSB?\", SUBSYSTEMS==\"usb\", ATTRS{idVendor}==\""+str(BODYidVendor)+"\", ATTRS{serial}==\""+str(BODYserial)+"\", ATTRS{idProduct}==\""+str(BODYidProduct)+"\", MODE=\"0777\", SYMLINK+=\"robot/body\"")
    f2.close()
except:
    print(sys.exc_info())
    print "N??o foi possivel criar as regras body"
    print "Verifique se a chave que liga os servos motores est?? na posi????o ligada seu bobo."


exit(0)





