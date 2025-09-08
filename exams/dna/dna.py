import csv
import sys


def main():
    n = len(sys.argv)

    if n != 3:
        sys.exit("Please provide the data base and the dna sequence.")

    data_base = sys.argv[1]
    sequences = sys.argv[2]

    rows = []

    with open(data_base) as csvfile:
        reader = csv.reader(csvfile)
        for row in reader:
            rows.append(row)

    seqs = open(sequences)
    content = seqs.read()

    current_seq = ""

    seq_dict = {
       "AGAT": 0,
       "AATG": 0,
       "TATC": 0
    }


    '''
    LOGIC:
    iterate through the dictionary and check if the strs are inside the dna sequence. If they are it saves the starting index of the next
    sequence and checks. If they match it adds to the count and continues until it doesn't find anything, in which case it
    stores the count. It then cuts all the strs by the last index and repeats the process until the highest number has been found
    '''
    for s in seq_dict:
        seq_content = content
        while True:
            try:
                seq_index = seq_content.index(s) + 4 #find first instance of the seq
            except ValueError:
                break
            current_seq = s
            counter = 1 #previously this was zero, however that is a logical error since it would therefor not count the first time a sequence was picked up

            while current_seq == s:
                try:
                    next_seq = seq_content[seq_index:seq_index + 4]
                except IndexError:
                    break
                if next_seq == current_seq:
                    seq_index += 4
                    counter += 1
                else:
                    if seq_dict[current_seq] < counter:
                        seq_dict[current_seq] = counter
                    break
            try:
                seq_content = seq_content[seq_index:] #cut content so it doesn't repeat
            except IndexError:
                break


    for row in rows:
        name = row[0]
        agat = row[1]
        aatg = row[2]
        tatc = row[3]

        if agat == seq_dict["AATG"] and aatg == seq_dict["AATG"] and tatc == seq_dict["TATC"]:
            print(name)
        else:
            continue


    return


main()


