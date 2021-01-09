idf_component_register(SRCS "main.c"
                            "startup.c"
                            "bare_metal_app_cpu.c"
                            "npiso.c"
                    INCLUDE_DIRS "")
idf_build_set_property(COMPILE_DEFINITIONS "-DBLUERETRO" APPEND)
idf_build_set_property(COMPILE_DEFINITIONS "-DXT_INTEXC_HOOKS" APPEND)
target_link_libraries(${COMPONENT_TARGET} "-u ld_include_my_startup_file")
