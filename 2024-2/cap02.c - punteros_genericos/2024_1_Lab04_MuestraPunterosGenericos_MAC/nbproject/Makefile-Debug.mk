#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/60cecaec/MuestraPunteroGenerico.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lib2024_1_lab04_muestrapunterosgenericos_mac.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lib2024_1_lab04_muestrapunterosgenericos_mac.a: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lib2024_1_lab04_muestrapunterosgenericos_mac.a
	${AR} -rv ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lib2024_1_lab04_muestrapunterosgenericos_mac.a ${OBJECTFILES} 
	$(RANLIB) ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lib2024_1_lab04_muestrapunterosgenericos_mac.a

${OBJECTDIR}/_ext/60cecaec/MuestraPunteroGenerico.o: /Users/andres/Library/CloudStorage/GoogleDrive-amelgar@gmail.com/Mi\ unidad/GitHubRepositorio/1INF25-melgar/cap02.c\ -\ punteros_genericos/2024_1_Lab04_MuestraPunterosGenericos_MAC/MuestraPunteroGenerico.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/60cecaec
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/60cecaec/MuestraPunteroGenerico.o /Users/andres/Library/CloudStorage/GoogleDrive-amelgar@gmail.com/Mi\ unidad/GitHubRepositorio/1INF25-melgar/cap02.c\ -\ punteros_genericos/2024_1_Lab04_MuestraPunterosGenericos_MAC/MuestraPunteroGenerico.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
