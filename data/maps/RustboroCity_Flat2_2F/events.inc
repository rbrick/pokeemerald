RustboroCity_Flat2_2F_EventObjects: @ 8530B20
	object_event 1, EVENT_OBJ_GFX_OLD_MAN_2, 0, 11, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, RustboroCity_Flat2_2F_EventScript_215FD8, 0
	object_event 2, EVENT_OBJ_GFX_LITTLE_BOY_1, 0, 7, 3, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 0, 0, 0, RustboroCity_Flat2_2F_EventScript_215FE1, 0

RustboroCity_Flat2_2F_MapWarps: @ 8530B50
	warp_def 3, 1, 0, 2, MAP_RUSTBORO_CITY_FLAT2_1F
	warp_def 1, 1, 0, 0, MAP_RUSTBORO_CITY_FLAT2_3F

RustboroCity_Flat2_2F_MapEvents:: @ 8530B60
	map_events RustboroCity_Flat2_2F_EventObjects, RustboroCity_Flat2_2F_MapWarps, 0x0, 0x0

