# Copyright (c) 2019-present, Facebook, Inc.
# All rights reserved.
#
# This source code is licensed under the license found in the
# LICENSE file in the root directory of this source tree.
#
import sys


def f_gold(arr, n, A, B, C):
    for i in range(n):
        arr[i] = A * arr[i] * arr[i] + B * arr[i] + C
    index = -(sys.maxsize - 1)
    maximum = -(sys.maxsize - 1)
    for i in range(n):
        if maximum < arr[i]:
            index = i
            maximum = arr[i]
    i = 0
    j = n - 1
    new_arr = [0] * n
    k = 0
    while i < index and j > index:
        if arr[i] < arr[j]:
            new_arr[k] = arr[i]
            k += 1
            i += 1
        else:
            new_arr[k] = arr[j]
            k += 1
            j -= 1
    while i < index:
        new_arr[k] = arr[i]
        k += 1
        i += 1
    while j > index:
        new_arr[k] = arr[j]
        k += 1
        j -= 1
        new_arr[n - 1] = maximum
    for i in range(n):
        arr[i] = new_arr[i]


# TOFILL

if __name__ == "__main__":
    param = [
        (
            [9, 30, 49, 65, 78, 85, 85, 92],
            4,
            4,
            5,
            4,
        ),
        (
            [
                -48,
                89,
                -60,
                66,
                71,
                -37,
                47,
                -50,
                61,
                41,
                -22,
                -3,
                90,
                -57,
                77,
                -64,
                22,
                8,
                -90,
                -5,
                -94,
                -43,
                29,
                -29,
                86,
                -79,
                -8,
                27,
                -20,
                -44,
                16,
            ],
            18,
            20,
            20,
            23,
        ),
        (
            [
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
            ],
            25,
            26,
            15,
            18,
        ),
        (
            [
                87,
                70,
                77,
                87,
                73,
                81,
                66,
                19,
                83,
                7,
                63,
                42,
                42,
                59,
                20,
                73,
                17,
                27,
                47,
                2,
                63,
                62,
                19,
                17,
                69,
                39,
                82,
                71,
                81,
                39,
                36,
                40,
                45,
                4,
                25,
                69,
                30,
                76,
                68,
                88,
                29,
                73,
                68,
                51,
                24,
                14,
                69,
                18,
            ],
            33,
            42,
            35,
            41,
        ),
        (
            [
                -91,
                -85,
                -77,
                -73,
                -70,
                -68,
                -24,
                -21,
                -12,
                -1,
                9,
                29,
                48,
                52,
                56,
                63,
                88,
            ],
            8,
            12,
            8,
            8,
        ),
        (
            [0, 0, 0, 1, 1, 0, 1, 1, 1, 1],
            7,
            8,
            6,
            7,
        ),
        (
            [
                4,
                5,
                9,
                14,
                18,
                20,
                22,
                23,
                25,
                28,
                30,
                31,
                34,
                35,
                36,
                38,
                38,
                39,
                44,
                48,
                49,
                51,
                54,
                55,
                59,
                64,
                66,
                71,
                72,
                72,
                73,
                76,
                78,
                82,
                82,
                84,
                92,
                93,
                95,
            ],
            22,
            33,
            19,
            25,
        ),
        (
            [
                40,
                6,
                33,
                8,
                78,
                -58,
                2,
                24,
                40,
                3,
                46,
                94,
                -26,
                8,
                22,
                -83,
                96,
                -29,
                -38,
                -59,
                19,
                62,
                98,
                -55,
                -42,
                79,
                26,
                62,
                -56,
                -85,
                -22,
            ],
            20,
            16,
            19,
            16,
        ),
        (
            [
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
            ],
            23,
            21,
            19,
            23,
        ),
        (
            [
                3,
                68,
                40,
                48,
                54,
                35,
                95,
                56,
                89,
                40,
                77,
                68,
                46,
                78,
                13,
                27,
                6,
                17,
                36,
                99,
                81,
                2,
                77,
                52,
                66,
                52,
                92,
                43,
                90,
                22,
                55,
                67,
                99,
                60,
                58,
            ],
            28,
            21,
            23,
            23,
        ),
    ]
    filled_function_param = [
        (
            [9, 30, 49, 65, 78, 85, 85, 92],
            4,
            4,
            5,
            4,
        ),
        (
            [
                -48,
                89,
                -60,
                66,
                71,
                -37,
                47,
                -50,
                61,
                41,
                -22,
                -3,
                90,
                -57,
                77,
                -64,
                22,
                8,
                -90,
                -5,
                -94,
                -43,
                29,
                -29,
                86,
                -79,
                -8,
                27,
                -20,
                -44,
                16,
            ],
            18,
            20,
            20,
            23,
        ),
        (
            [
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
            ],
            25,
            26,
            15,
            18,
        ),
        (
            [
                87,
                70,
                77,
                87,
                73,
                81,
                66,
                19,
                83,
                7,
                63,
                42,
                42,
                59,
                20,
                73,
                17,
                27,
                47,
                2,
                63,
                62,
                19,
                17,
                69,
                39,
                82,
                71,
                81,
                39,
                36,
                40,
                45,
                4,
                25,
                69,
                30,
                76,
                68,
                88,
                29,
                73,
                68,
                51,
                24,
                14,
                69,
                18,
            ],
            33,
            42,
            35,
            41,
        ),
        (
            [
                -91,
                -85,
                -77,
                -73,
                -70,
                -68,
                -24,
                -21,
                -12,
                -1,
                9,
                29,
                48,
                52,
                56,
                63,
                88,
            ],
            8,
            12,
            8,
            8,
        ),
        (
            [0, 0, 0, 1, 1, 0, 1, 1, 1, 1],
            7,
            8,
            6,
            7,
        ),
        (
            [
                4,
                5,
                9,
                14,
                18,
                20,
                22,
                23,
                25,
                28,
                30,
                31,
                34,
                35,
                36,
                38,
                38,
                39,
                44,
                48,
                49,
                51,
                54,
                55,
                59,
                64,
                66,
                71,
                72,
                72,
                73,
                76,
                78,
                82,
                82,
                84,
                92,
                93,
                95,
            ],
            22,
            33,
            19,
            25,
        ),
        (
            [
                40,
                6,
                33,
                8,
                78,
                -58,
                2,
                24,
                40,
                3,
                46,
                94,
                -26,
                8,
                22,
                -83,
                96,
                -29,
                -38,
                -59,
                19,
                62,
                98,
                -55,
                -42,
                79,
                26,
                62,
                -56,
                -85,
                -22,
            ],
            20,
            16,
            19,
            16,
        ),
        (
            [
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
                1,
            ],
            23,
            21,
            19,
            23,
        ),
        (
            [
                3,
                68,
                40,
                48,
                54,
                35,
                95,
                56,
                89,
                40,
                77,
                68,
                46,
                78,
                13,
                27,
                6,
                17,
                36,
                99,
                81,
                2,
                77,
                52,
                66,
                52,
                92,
                43,
                90,
                22,
                55,
                67,
                99,
                60,
                58,
            ],
            28,
            21,
            23,
            23,
        ),
    ]
    n_success = 0
    for i, parameters_set in enumerate(param):
        f_gold(*(filled_function_param[i]))
        f_gold(*parameters_set)
        if parameters_set == filled_function_param[i]:
            n_success += 1
    print("#Results: %i, %i" % (n_success, len(param)))
