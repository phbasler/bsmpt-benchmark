window.BENCHMARK_DATA = {
  "lastUpdate": 1682147925514,
  "repoUrl": "https://github.com/phbasler/bsmpt-benchmark",
  "entries": {
    "C++ Benchmark": [
      {
        "commit": {
          "author": {
            "email": "philipp.basler@kit.edu",
            "name": "Philipp Basler"
          },
          "committer": {
            "email": "philipp.basler@kit.edu",
            "name": "Philipp Basler"
          },
          "distinct": true,
          "id": "bd3911bb2156b1e9e955e5747cc89567e3ea078a",
          "message": "Add write permission",
          "timestamp": "2023-04-22T00:42:10+02:00",
          "tree_id": "4f59c6d652adb4297ab6789f09bb2aba7555844b",
          "url": "https://github.com/phbasler/bsmpt-benchmark/commit/bd3911bb2156b1e9e955e5747cc89567e3ea078a"
        },
        "date": 1682116967592,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_TensorMultiplication",
            "value": 3895.09978943356,
            "unit": "ns/iter",
            "extra": "iterations: 178566\ncpu: 3893.72500924028 ns\nthreads: 1"
          },
          {
            "name": "BM_Simplified",
            "value": 151.61365418262616,
            "unit": "ns/iter",
            "extra": "iterations: 4614586\ncpu: 151.6054311264326 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "philipp.basler@kit.edu",
            "name": "Philipp Basler"
          },
          "committer": {
            "email": "philipp.basler@kit.edu",
            "name": "Philipp Basler"
          },
          "distinct": true,
          "id": "209b7ede8fe6728106542f04083745da339a2241",
          "message": "Adjust readme",
          "timestamp": "2023-04-22T00:45:51+02:00",
          "tree_id": "de4edab252bfd9a2efac59a29f8100780315ad02",
          "url": "https://github.com/phbasler/bsmpt-benchmark/commit/209b7ede8fe6728106542f04083745da339a2241"
        },
        "date": 1682117185136,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_TensorMultiplication",
            "value": 3897.7948755341545,
            "unit": "ns/iter",
            "extra": "iterations: 178282\ncpu: 3897.340168945827 ns\nthreads: 1"
          },
          {
            "name": "BM_Simplified",
            "value": 151.080215248845,
            "unit": "ns/iter",
            "extra": "iterations: 4635565\ncpu: 150.9921444311535 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "28863303+phbasler@users.noreply.github.com",
            "name": "Philipp Basler",
            "username": "phbasler"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "269624b6042397bdab3ac9599f0c7733aaafe941",
          "message": "Update README.md",
          "timestamp": "2023-04-22T00:47:47+02:00",
          "tree_id": "c99c4e0fc3ce8a75d57b60ef994cdbbd7abb27d5",
          "url": "https://github.com/phbasler/bsmpt-benchmark/commit/269624b6042397bdab3ac9599f0c7733aaafe941"
        },
        "date": 1682117294711,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_TensorMultiplication",
            "value": 3903.0666842574124,
            "unit": "ns/iter",
            "extra": "iterations: 178123\ncpu: 3895.348719704922 ns\nthreads: 1"
          },
          {
            "name": "BM_Simplified",
            "value": 153.0610855239721,
            "unit": "ns/iter",
            "extra": "iterations: 4576518\ncpu: 152.9046537127135 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "philipp.basler@kit.edu",
            "name": "Philipp Basler"
          },
          "committer": {
            "email": "philipp.basler@kit.edu",
            "name": "Philipp Basler"
          },
          "distinct": true,
          "id": "d03441f1a265f05aada455db5eff89d7c0d38c29",
          "message": "Add mixed mode using matirx product",
          "timestamp": "2023-04-22T01:07:33+02:00",
          "tree_id": "86143fc75cd19a14858edf476794da99092ffffc",
          "url": "https://github.com/phbasler/bsmpt-benchmark/commit/d03441f1a265f05aada455db5eff89d7c0d38c29"
        },
        "date": 1682118516962,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_TensorMultiplication",
            "value": 4153.436302609543,
            "unit": "ns/iter",
            "extra": "iterations: 178461\ncpu: 4152.459080695501 ns\nthreads: 1"
          },
          {
            "name": "BM_Simplified",
            "value": 147.19186962180424,
            "unit": "ns/iter",
            "extra": "iterations: 4753801\ncpu: 147.17778468219433 ns\nthreads: 1"
          },
          {
            "name": "BM_MixedMode",
            "value": 2009.2460948768364,
            "unit": "ns/iter",
            "extra": "iterations: 350117\ncpu: 2009.0923891156392 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "philipp.basler@kit.edu",
            "name": "Philipp Basler"
          },
          "committer": {
            "email": "philipp.basler@kit.edu",
            "name": "Philipp Basler"
          },
          "distinct": true,
          "id": "ad977d679279ffdee4a366e9a48743342d7ab4f7",
          "message": "Add unit test to check if all are equal",
          "timestamp": "2023-04-22T08:06:13+02:00",
          "tree_id": "df5464a6642f0033cfabb89ce63311efae044929",
          "url": "https://github.com/phbasler/bsmpt-benchmark/commit/ad977d679279ffdee4a366e9a48743342d7ab4f7"
        },
        "date": 1682143644115,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_TensorMultiplication",
            "value": 4612.18508470581,
            "unit": "ns/iter",
            "extra": "iterations: 135646\ncpu: 4610.9004320068425 ns\nthreads: 1"
          },
          {
            "name": "BM_Simplified",
            "value": 77.80670687988145,
            "unit": "ns/iter",
            "extra": "iterations: 9002845\ncpu: 77.78762157962288 ns\nthreads: 1"
          },
          {
            "name": "BM_MixedMode",
            "value": 2065.6944156421146,
            "unit": "ns/iter",
            "extra": "iterations: 337550\ncpu: 2064.2728484668937 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "philipp.basler@kit.edu",
            "name": "Philipp Basler"
          },
          "committer": {
            "email": "philipp.basler@kit.edu",
            "name": "Philipp Basler"
          },
          "distinct": true,
          "id": "6f4eb1135f30704e61312fc267ca0a3d90dc30d1",
          "message": "Change master to main in workflow",
          "timestamp": "2023-04-22T08:08:39+02:00",
          "tree_id": "d35c9f326b15924940f7fdfd10fc8e3b3e51c407",
          "url": "https://github.com/phbasler/bsmpt-benchmark/commit/6f4eb1135f30704e61312fc267ca0a3d90dc30d1"
        },
        "date": 1682143788547,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_TensorMultiplication",
            "value": 4621.188662212127,
            "unit": "ns/iter",
            "extra": "iterations: 151758\ncpu: 4620.781112033632 ns\nthreads: 1"
          },
          {
            "name": "BM_Simplified",
            "value": 79.84627017809984,
            "unit": "ns/iter",
            "extra": "iterations: 8904889\ncpu: 79.8262841906283 ns\nthreads: 1"
          },
          {
            "name": "BM_MixedMode",
            "value": 2073.2809963881145,
            "unit": "ns/iter",
            "extra": "iterations: 337499\ncpu: 2072.844660280475 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "philipp.basler@kit.edu",
            "name": "Philipp Basler"
          },
          "committer": {
            "email": "philipp.basler@kit.edu",
            "name": "Philipp Basler"
          },
          "distinct": true,
          "id": "ccea83ce71e41876c3d7897c19bc67c7d8e9dce5",
          "message": "add license",
          "timestamp": "2023-04-22T08:10:24+02:00",
          "tree_id": "a01258aae388186650b66bae82ce12ccbc113339",
          "url": "https://github.com/phbasler/bsmpt-benchmark/commit/ccea83ce71e41876c3d7897c19bc67c7d8e9dce5"
        },
        "date": 1682143859051,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_TensorMultiplication",
            "value": 4631.983553882783,
            "unit": "ns/iter",
            "extra": "iterations: 152498\ncpu: 4631.920418628441 ns\nthreads: 1"
          },
          {
            "name": "BM_Simplified",
            "value": 60.460992617845534,
            "unit": "ns/iter",
            "extra": "iterations: 11569387\ncpu: 60.456660322625574 ns\nthreads: 1"
          },
          {
            "name": "BM_MixedMode",
            "value": 2053.520373467378,
            "unit": "ns/iter",
            "extra": "iterations: 342627\ncpu: 2049.4330569394715 ns\nthreads: 1"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "28863303+phbasler@users.noreply.github.com",
            "name": "Philipp Basler",
            "username": "phbasler"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "e707c8fbe653fce86fe95789df32fa53f6b965fb",
          "message": "Delete LICENSE",
          "timestamp": "2023-04-22T09:18:11+02:00",
          "tree_id": "863d104c9baf915128d429ecbfb9b69512d17b4a",
          "url": "https://github.com/phbasler/bsmpt-benchmark/commit/e707c8fbe653fce86fe95789df32fa53f6b965fb"
        },
        "date": 1682147924878,
        "tool": "googlecpp",
        "benches": [
          {
            "name": "BM_TensorMultiplication",
            "value": 4643.362393173585,
            "unit": "ns/iter",
            "extra": "iterations: 152467\ncpu: 4643.324785035449 ns\nthreads: 1"
          },
          {
            "name": "BM_Simplified",
            "value": 60.561546092819455,
            "unit": "ns/iter",
            "extra": "iterations: 11548621\ncpu: 60.55846840934515 ns\nthreads: 1"
          },
          {
            "name": "BM_MixedMode",
            "value": 2045.499059698277,
            "unit": "ns/iter",
            "extra": "iterations: 342975\ncpu: 2045.4073912092724 ns\nthreads: 1"
          }
        ]
      }
    ]
  }
}