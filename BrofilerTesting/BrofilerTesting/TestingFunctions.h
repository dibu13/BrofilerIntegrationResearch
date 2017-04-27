#pragma once
#include <list>
#include <vector>
#include <map>
#include "p2List.h"
#include "p2DynArray.h"

bool MainLoop(bool runApp);
bool CheckText();

bool ArrayVsList();
bool ArrayVsListCustomContainers();

void FillArray(int* arraySample, int size);
void FillList(std::list<int> * listSample, int size);
void FillVector(std::vector<int> * vectorSample, int size);
void IterateArray(int* arraySample, int size);
void IterateList(std::list<int> * listSample, int size);
void IterateVector(std::vector<int> * vectorSample, int size);
void IterateVectorIterator(std::vector<int> * vectorSample, int size);

void FillCustomVector(p2DynArray<int>* vector, int size);
void FillCustomList(p2List<int>* list, int size);
void IterateCustomVector(p2DynArray<int>* vector, int size);
void IterateCustomList(p2List<int>* list);

void FindVsIterateMap();

float FillMap(std::map<float, float>& map);
void FindItemMap(std::map<float, float> map, float value);
void FindWithIterateMap(std::map<float, float> map, float value);
