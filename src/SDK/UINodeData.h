///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class UIGraphAsset;
}

namespace fb {
	class UINodeData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINodeData"); }
		virtual ~UINodeData() override {}
		UINodeData() {
			m_isRootNode = false;
			m_parentIsScreen = false;
		};

		String m_name; // 0x10 (16)
		CtrRef<UIGraphAsset> m_parentGraph; // 0x18 (24)
		bool m_isRootNode; // 0x20 (32)
		bool m_parentIsScreen; // 0x21 (33)
	}; // 0x28 (40)
}

