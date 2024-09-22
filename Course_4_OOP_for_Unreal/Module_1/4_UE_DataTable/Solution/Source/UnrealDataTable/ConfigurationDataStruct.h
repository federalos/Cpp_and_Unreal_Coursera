// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once 

#include "Engine/DataTable.h"

#include "ConfigurationDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FConfigurationDataStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	FConfigurationDataStruct()
		: TeddyBearMoveAmountPerSecond(100)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite,
		Category = "Configuration Data Struct")
		float TeddyBearMoveAmountPerSecond;
};