
/**
 * main
 */
public class Array {

        public static void main(String[] args) {
                CustomArray ar = new CustomArray(1, 2, 4, 5, 6, 7);
                ar.push(8);
                System.out.println(ar.getLength());
                System.out.println(ar.toString());

        }

        public static class CustomArray {
                private int length = 0;
                private Object[] data;

                public CustomArray(Object... args) {

                        data = new Object[args.length];
                        for (int i = 0; i < args.length; i++) {
                                data[i] = args[i];
                        }

                        length = args.length;

                }

                public int getLength() {
                        return length;
                }

                public void push(Object element) {

                        if (data == null) {
                                data = new Object[1];
                                data[0] = element;
                                length = 1;
                        } else if (data.length < length + 1) {
                                int newSize = length + 1;

                                Object[] newData = new Object[newSize];

                                for (int i = 0; i < data.length; i++) {
                                        newData[i] = data[i];
                                }

                                newData[length] = element;
                                data = newData;
                        } else {
                                data[length] = element;
                        }

                        length++;
                }

                public String toString() {

                        String str = "";
                        for (int i = 0; i < data.length; i++) {
                                str = str.concat(data[i].toString());
                        }

                        return str;
                }

        }

}