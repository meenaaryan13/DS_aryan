public class over {
    void show() {
        System.out.println(" Method overraiding ");
    }
}

class overraiding extends over {
    void show() {
        System.out.println(" Second method overraiding");
    }

    public static void main(String[] args) {
        overraiding o1 = new overraiding();
        o1.show();

        over o2 = new over();
        o2.show();
    }
}
