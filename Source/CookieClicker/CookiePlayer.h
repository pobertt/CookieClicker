// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CookiePlayer.generated.h"

UCLASS()
class COOKIECLICKER_API ACookiePlayer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACookiePlayer();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cookies")
		int NumOfCookies = 0;

	UFUNCTION(BlueprintCallable, Category = "Cookies")
		int AddCookie(int CookiesToAdd);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
