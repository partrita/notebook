# About


# Mac_arm 에서 pytorch 사용하기

## Check MPS 활성화

apple silicon의 gpu 환경이 사용 가능한지 여부를 확인해야 합니다. 참고로 apple에서는 gpu라는 단어 대신 MPS(Metal Performance Shaders)라는 용어를 사용하며, 애플의 그래픽 및 머신 러닝 애플리케이션용 프레임워크를 뜻합니다. MPS는 iOS 및 macOS 기기의 GPU를 활용하여 그래픽 처리 및 머신 러닝 작업을 수행할 수 있습니다. MPS는 다양한 컨볼루션, 행렬 연산 및 활성화 함수 등과 같은 머신 러닝 연산을 포함한 다양한 그래픽 및 머신 러닝 기능을 제공합니다. 이러한 기능은 모델 훈련 및 추론 작업에서 사용할 수 있으며, 다양한 머신 러닝 프레임워크에서 사용할 수 있는 API를 제공합니다. MPS는 기존의 CUDA 또는 OpenCL과 같은 라이브러리와 달리 애플이 직접 제공하는 프레임워크로, 애플의 GPU 기술에 최적화되어 있습니다. 이는 iOS 및 macOS 기기에서 더욱 효율적인 그래픽 처리 및 머신 러닝 작업을 수행할 수 있도록 도와줍니다. 

```python
import torch
# import math
print(torch.backends.mps.is_available())
print(torch.backends.mps.is_built())
```