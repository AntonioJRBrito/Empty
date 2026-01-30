idf_component_register(
    SRCS
        "main.cpp"
       
    INCLUDE_DIRS
        "."
        
    REQUIRES
	esp_common
    esp_event
)

target_compile_options(${COMPONENT_LIB} PRIVATE
    -std=gnu++20
    -Wno-return-type
    -Wno-missing-field-initializers
    -Wno-unused-function
)