// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

#include "MyPawn.h"
#include "MyPlayerController.h"

//CDO만들때 초기화
AMyGameModeBase::AMyGameModeBase()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Red,
			TEXT("형렬이가 간식 다 먹었다."));
	}
	UE_LOG(LogTemp, Warning, TEXT("안녕하세요"));

	DefaultPawnClass = AMyPawn::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
}
