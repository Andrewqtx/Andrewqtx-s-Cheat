namespace OW {
    namespace offset {

        // Base

        static constexpr auto Address_viewmatrix_base = 0x35892F0;//SIG:48 03 0D ? ? ? ? 89 44 24 28 48 B8 ? ? ? ? ? ? ? ?
        static constexpr auto Address_viewmatrix_base_test = 0x3C6F468;//SIG: 48 8B 0D ? ? ? ? 45 33 C0 E8 ? ? ? ? 48 8B F0
        static constexpr auto Address_entity_base = 0x35744D0;//SIG:48 03 05 ? ? ? ? 74 ? 81 E3 ? ? ? ? 3B 58 ? 75 ? 48 8B 00 90 89 3D
        static constexpr auto offset_viewmatrix_ptr = 0x7E0; //ok
        static constexpr auto offset_viewmatrix_xor_key = 0xE9D5BD72CF68F0ELL;
        static constexpr auto offset_viewmatrix_xor_key2 = 0xE74B92C2FD626944uLL;
        static constexpr auto offset_viewmatrix_xor_key3 = 0x4A0488B17A340592LL;
        static constexpr auto changefov = 0x36FAC48;//SIG:F3 0F 11 05 ? ? ? ? 48 85 C9 74 ? 48 8D 55 ? E8 ? ? ? ? 48 8B 05 ? ? ? ? 48 85 C0 74 ? 48 8B 15 ? ? ? ? 48 8D 0D ? ? ? ? FF D0 8B 43

        static constexpr auto SensitivePtr = 0x213C; //good
        static constexpr auto view_angle = 0x11A0;
        static constexpr auto Input = 0x115C;
    }
}

//decryptcomp:48 89 5c 24 ? 48 89 6c 24 ? 56 57 41 56 48 83 ec ? 49 8b f1 49 8b e8
        //HeapManager SIG:84 C0 74 19 48 8B 0D ? ? ? ?(fifth sub)   