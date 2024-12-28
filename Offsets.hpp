
namespace OW {
    namespace offset {

        // Base

        static constexpr auto Address_viewmatrix_base = 0x353D2F0;//SIG:48 03 0D ? ? ? ? 89 44 24 28 48 B8 ? ? ? ? ? ? ? ?
        static constexpr auto Address_viewmatrix_base_test = 0x3C233D8;//SIG: 48 8B 0D ? ? ? ? 45 33 C0 E8 ? ? ? ? 48 8B F0
        static constexpr auto Address_entity_base = 0x35284D0;//SIG:2B 15 ? ? ? ? C7 41 ? ? ? ? ? 8B 05 ? ? ? ? C1 EA ? 83 F8 ? 75 ? 89 15 ? ? ? ? EB ? 48 8B C8 48 8B 05 ? ? ? ? 48 03 C9 89 54 C8 ? FF 0D ? ? ? ? 89 15 ? ? ? ? C7 87
        static constexpr auto offset_viewmatrix_ptr = 0x7E0; //ok
        static constexpr auto offset_viewmatrix_xor_key = 0x33FD5D20F0C7B737LL; // get xor_key 1 2 3 using viewmatrix_base sig ( all next to eachother)
        static constexpr auto offset_viewmatrix_xor_key2 = 0xDCD2B44BC19A282DuLL;
        static constexpr auto offset_viewmatrix_xor_key3 = 0x611BF016D92C23FBLL; //use + 0x20 or - 0x20 and it might get  fixed
        static constexpr auto changefov = 0x36AEBC8;//SIG:F3 0F 11 05 ? ? ? ? 48 85 C9 74 ? 48 8D 55 ? E8 ? ? ? ? 48 8B 05 ? ? ? ? 48 85 C0 74 ? 48 8B 15 ? ? ? ? 48 8D 0D ? ? ? ? FF D0 8B 43

        static constexpr auto SensitivePtr = 0x213C; //good
        static constexpr auto view_angle = 0x11A0;
        static constexpr auto Input = 0x115C;
    }
}

//decryptcomp:48 89 5c 24 ? 48 89 6c 24 ? 56 57 41 56 48 83 ec ? 49 8b f1 49 8b e8
        //HeapManager SIG:84 C0 74 19 48 8B 0D ? ? ? ?(fifth sub)