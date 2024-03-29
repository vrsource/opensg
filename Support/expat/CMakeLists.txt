CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

IF(OSGExpatSrcDir)

  MESSAGE(STATUS "adding expat from : ${OSGExpatSrcDir}")

  PROJECT(OSGExpat)

  SET(${PROJECT_NAME}SharedTarget osgexpat)
  SET(${PROJECT_NAME}StaticTarget libosgexpat)

  SET(OSG_EXPAT_SRCS ${OSGExpatSrcDir}/lib/xmlparse.c
                     ${OSGExpatSrcDir}/lib/xmlrole.c
                     ${OSGExpatSrcDir}/lib/xmltok.c
                     ${OSGExpatSrcDir}/lib/xmltok_impl.c
                     ${OSGExpatSrcDir}/lib/xmltok_ns.c)

  SET(OSG_EXPAT_HDR ${OSGExpatSrcDir}/lib/expat.h
                    ${OSGExpatSrcDir}/lib/expat_external.h)

  INCLUDE_DIRECTORIES(${OSGExpatSrcDir}/lib)

  SET(OSGEXPAT_DEF COMPILED_FROM_DSP)

  IF(BUILD_SHARED_LIBS)
    ADD_LIBRARY(${${PROJECT_NAME}SharedTarget} SHARED ${OSG_EXPAT_SRCS})

    ADD_DEPENDENCIES(ALL_STANDARD_BUILD ${${PROJECT_NAME}SharedTarget})

    SET_TARGET_PROPERTIES(${${PROJECT_NAME}SharedTarget} PROPERTIES
                          DEBUG_POSTFIX "D")

    SET(OSGEXPAT_DEF_SHARED ${OSGEXPAT_DEF};_USRDLL;_WINDLL)

    SET_TARGET_PROPERTIES(${${PROJECT_NAME}SharedTarget} PROPERTIES
                          COMPILE_DEFINITIONS "${OSGEXPAT_DEF_SHARED}")

    SET_TARGET_PROPERTIES(${${PROJECT_NAME}SharedTarget} PROPERTIES
                          LINK_FLAGS /DEF:"${OSGExpatSrcDir}/lib/libexpat.def")


    INSTALL(TARGETS ${${PROJECT_NAME}SharedTarget}
                CONFIGURATIONS Release
                RUNTIME DESTINATION bin COMPONENT release_runtimes
                LIBRARY DESTINATION lib COMPONENT release_libraries
                ARCHIVE DESTINATION lib COMPONENT release_libraries)

    INSTALL(TARGETS ${${PROJECT_NAME}SharedTarget}
                CONFIGURATIONS Debug
                RUNTIME DESTINATION bin COMPONENT debug_runtimes
                LIBRARY DESTINATION lib COMPONENT debug_libraries
                ARCHIVE DESTINATION lib COMPONENT debug_libraries)

  ENDIF(BUILD_SHARED_LIBS)

  IF(BUILD_STATIC_LIBS)
    ADD_LIBRARY(${${PROJECT_NAME}StaticTarget} STATIC ${OSG_EXPAT_SRCS})

    ADD_DEPENDENCIES(ALL_STANDARD_BUILD ${${PROJECT_NAME}StaticTarget})

    SET_TARGET_PROPERTIES(${${PROJECT_NAME}StaticTarget} PROPERTIES
                          DEBUG_POSTFIX "D")

    SET(OSGEXPAT_DEF_STATIC ${OSGEXPAT_DEF};_LIB)

    SET_TARGET_PROPERTIES(${${PROJECT_NAME}StaticTarget} PROPERTIES
                          COMPILE_DEFINITIONS "${OSGEXPAT_DEF_STATIC}")

    INSTALL(TARGETS ${${PROJECT_NAME}StaticTarget}
                CONFIGURATIONS Release
                RUNTIME DESTINATION lib COMPONENT release_libraries
                LIBRARY DESTINATION lib COMPONENT release_libraries
                ARCHIVE DESTINATION lib COMPONENT release_libraries)

    INSTALL(TARGETS ${${PROJECT_NAME}StaticTarget}
                CONFIGURATIONS Debug
                RUNTIME DESTINATION lib COMPONENT debug_libraries
                LIBRARY DESTINATION lib COMPONENT debug_libraries
                ARCHIVE DESTINATION lib COMPONENT debug_libraries)

  ENDIF(BUILD_STATIC_LIBS)

  INSTALL(FILES ${OSG_EXPAT_HDR}
          DESTINATION include${OSG_SUPPORT_INC_SUBDIR}
          COMPONENT code_headers
          PERMISSIONS OWNER_WRITE OWNER_READ
                      GROUP_READ
                      WORLD_READ)

  SET(OSG_EXPAT_INCLUDE_DIR ${OSGExpatSrcDir}/lib CACHE PATH "")
  SET(OSG_EXPAT_STATIC_LIBRARY ${${PROJECT_NAME}StaticTarget} CACHE STRING "")
  SET(OSG_EXPAT_SHARED_LIBRARY ${${PROJECT_NAME}SharedTarget} CACHE STRING "")

ELSE(OSGExpatSrcDir)
  MESSAGE(STATUS "ignoring expat")

  SET(OSGExpatSrcDir "" CACHE PATH "")
ENDIF(OSGExpatSrcDir)
