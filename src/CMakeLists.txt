set(target ${APPLICATION})

file(GLOB srcs "*.cxx")

add_application(${target} STATIC ${srcs})
set_target_properties(${target}
    PROPERTIES OUTPUT_NAME ${MODULE})

if (UNIX)
  target_link_application(${target} ${CMAKE_THREAD_LIBS_INIT})
endif (UNIX)
target_link_application(${target} ${APPLICATION_DEPS})

set(APPLICATION_DEPS "${APPLICATION_DEPS};${target}" PARENT_SCOPE)
