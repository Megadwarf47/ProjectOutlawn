///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UnlockUserDataBase.h>

namespace fb {
	class VeniceUnlockUserData : public UnlockUserDataBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VeniceUnlockUserData"); }
		virtual ~VeniceUnlockUserData() override {}
		VeniceUnlockUserData() {
			m_checkSquad = false;
		};

		bool m_checkSquad; // 0x18 (24)
	}; // 0x20 (32)
}

