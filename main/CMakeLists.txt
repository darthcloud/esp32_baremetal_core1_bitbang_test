idf_component_register(SRCS "main.c"
                            "bare_metal_app_cpu.c"
                            "npiso.c"
                    INCLUDE_DIRS "")
idf_build_set_property(COMPILE_DEFINITIONS "-DBLUERETRO" APPEND)
