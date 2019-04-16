    fun main(args: Array<String>) {
        val lines = readLine()!!.split(" ").map {it.toInt()}
     
        val res1 = lines[0] * 2 - 1
        val res2 = lines[0] + lines[1]
        val res3 = lines[1] * 2 - 1
     
        print(arrayListOf(res1, res2, res3).max())
    }