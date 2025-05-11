///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SocketObjectDataBase.h>

namespace fb {
	class Asset;
}

namespace fb {
	class WeaponSocketObjectData : public SocketObjectDataBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponSocketObjectData"); }
		virtual ~WeaponSocketObjectData() override {}
		WeaponSocketObjectData() {
		};

		CtrRef<Asset> m_used1p; // 0x10 (16)
		CtrRef<Asset> m_used1pZoom; // 0x18 (24)
		CtrRef<Asset> m_used3p; // 0x20 (32)
		CtrRef<Asset> m_used3pZoom; // 0x28 (40)
	}; // 0x30 (48)
}

