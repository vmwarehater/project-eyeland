set_project("client")

set_xmakever("2.6.0")

set_languages("c99")

target("client")
    set_kind("binary")  
    add_files("src/*.c")
    set_targetdir(".")
    add_files("src/**/*.c") 
    add_includedirs("src") 

    if is_os("windows") then
        add_linkdirs("lib/windows") 
        add_links("raylibdll", "raylib") 
        add_links("netlib") 
        add_syslinks("gdi32", "winmm") 
    else
        add_linkdirs("lib/linux") 
        add_links("libnetlib.a") 
        add_links("libraylib.a")
    end