///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Blueprint.h>
#include <fb/RefArray.h>

namespace fb {
	class DataContainer;
}

namespace fb {
	class DataContainerCollectionBlueprint : public Blueprint {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DataContainerCollectionBlueprint"); }
		virtual ~DataContainerCollectionBlueprint() override {}
		DataContainerCollectionBlueprint() {
		};

		RefArray<DataContainer> m_dataContainers; // 0x40 (64)
	}; // 0x48 (72)
}

