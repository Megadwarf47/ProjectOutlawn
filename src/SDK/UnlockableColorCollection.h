///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class ColorReference;
	class ColorUnlockPartData;
}

namespace fb {
	class UnlockableColorCollection : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UnlockableColorCollection"); }
		virtual ~UnlockableColorCollection() override {}
		UnlockableColorCollection() {
		};

		CtrRef<ColorReference> m_defaultValue; // 0x10 (16)
		RefArray<ColorUnlockPartData> m_possibleValues; // 0x18 (24)
	}; // 0x20 (32)
}

