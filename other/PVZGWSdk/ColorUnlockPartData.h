///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class ColorReference;
}

namespace fb {
	class ColorUnlockPartData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ColorUnlockPartData"); }
		virtual ~ColorUnlockPartData() override {}
		ColorUnlockPartData() {
		};

		CtrRef<ColorReference> m_colorReference; // 0x10 (16)
	}; // 0x18 (24)
}

